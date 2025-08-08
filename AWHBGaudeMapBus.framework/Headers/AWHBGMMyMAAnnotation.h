//
//  AWHBGMMyMAAnnotation.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/19.
//

#import <Foundation/Foundation.h>
#import <MAMapKit/MAMapKit.h>

#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMMyMAAnnotation : NSObject<MAAnnotation>

@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

@property (nonatomic, copy) AWHBBCarModel *model; //大头针对应的model
@property (nonatomic, assign) NSInteger index;

@property (assign, nonatomic) NSInteger count;
@property (nonatomic, strong) NSMutableArray *pois;
@property (nonatomic, strong) NSString *carIds;

- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate count:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END

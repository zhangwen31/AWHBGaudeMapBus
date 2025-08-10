//
//  AWHBGMMaintenanceMAAnnotation.h
//  AWHBGaudeMapBus
//
//  Created by 王恒 on 2024/3/10.
//

#import <Foundation/Foundation.h>
#import <AWHBPublicBusiness/AWHBPBMaintenanceManagementModel.h>
#import <MAMapKit/MAMapKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMMaintenanceMAAnnotation : NSObject<MAAnnotation>

@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

@property (nonatomic, strong) AWHBPBMaintenanceManagementModel *model; //大头针对应的model
@property (nonatomic, assign) NSInteger index;

@end

NS_ASSUME_NONNULL_END

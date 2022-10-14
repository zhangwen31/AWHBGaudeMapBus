//
//  AWHBGMCustomAnnotationNewView.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/6/4.
//

#import <MAMapKit/MAMapKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMCustomAnnotationNewView : MAPinAnnotationView

@property (nonatomic, assign) NSUInteger count;
@property (nonatomic, strong) AWHBBCarModel *model;
@property (nonatomic, readwrite,strong) UILabel *countLab;
@property (nonatomic, strong) UILabel *countLabel;
@property (nonatomic, strong) UILabel *speedLab;
- (void)setModel:(AWHBBCarModel *)model;
-(void)setupLabel;

@end

NS_ASSUME_NONNULL_END

//
//  AWHBGMUserLocationAnnotationView.h
//  AWHBGaudeMapBus
//
//  Created by 王恒 on 2024/7/13.
//

#import <MAMapKit/MAMapKit.h>
#import <AWHBPublicBusiness/AWHBPBPositionCustomCalloutView.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMUserLocationAnnotationView : MAPinAnnotationView

@property (nonatomic, readonly) AWHBPBPositionCustomCalloutView *calloutView;

@property(nonatomic,copy)AWHBBCarModel *model;

///经纬度
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
/// 计算与车辆距离
- (void)calculatedVehicleDistance;

@end

NS_ASSUME_NONNULL_END

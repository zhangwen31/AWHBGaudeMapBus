//
//  AWHBGMSurroundingVehiclesView.h
//  AWHBGaudeMapBus
//
//  Created by 王恒 on 2026/5/3.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBSurroundingVehiclesModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMSurroundingVehiclesView : UIView
/// 地图移动中心位置坐标经纬度
@property (nonatomic, copy) void (^selectCenterAddressBlock)(CLLocationCoordinate2D coordinate);

- (void)setCarMapArray:(NSMutableArray<AWHBPBSurroundingVehiclesModel *> *)carMapArray;

- (void)selectedCurrentAddress:(CLLocationCoordinate2D)coordinate;

@end

NS_ASSUME_NONNULL_END

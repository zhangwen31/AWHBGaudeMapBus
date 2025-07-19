//
//  AWHBGMMonomerMonitoringMapView.h
//  AWHBGaudeMapBus
//
//  Created by 王恒 on 2023/6/10.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import <AWHVideoBasePlayer/AWHVBPCustomCalloutVoiceView.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMMonomerMonitoringMapView : UIView

@property(nonatomic,weak)UIViewController *viewController;
/// 是否一致隐藏车辆卡片
@property(nonatomic,assign)BOOL isHiddenCustomView;

@property(nonatomic, copy) void (^fullScreenClickBlock)(BOOL isFullScreen);

+ (AWHBGMMonomerMonitoringMapView *)shareIsNoBottomSpace:(BOOL)isNoBottomSpace;

- (void)refreshData:(AWHBBCarModel *)model;

- (void)refreshInformation;

@end

NS_ASSUME_NONNULL_END

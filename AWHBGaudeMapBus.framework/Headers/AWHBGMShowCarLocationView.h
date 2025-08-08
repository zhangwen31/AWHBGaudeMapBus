//
//  AWHBGMShowCarLocationView.h
//  AWHBGaudeMapBus
//
//  Created by 王恒 on 2024/3/9.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBMaintenanceManagementModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMShowCarLocationView : UIView

@property (nonatomic, copy) void (^fullScreenClick)(BOOL isFullScreen);

@property (nonatomic, copy) void (^refreshClickBlock)(void);

- (void)refreshDataWithCarMapArray:(NSArray<AWHBPBMaintenanceManagementModel *> *)carMapArray;

- (void)selectedMaintenanceManagementModel:(AWHBPBMaintenanceManagementModel *)model;

@end

NS_ASSUME_NONNULL_END

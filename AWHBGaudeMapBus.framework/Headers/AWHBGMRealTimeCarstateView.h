//
//  AWHBGMRealTimeCarstateView.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^AWHBGMNetworkRequestBlock)(NSString * title);

@interface AWHBGMRealTimeCarstateView : UIView
@property(nonatomic,weak)UIViewController *viewController;
@property(nonatomic,strong)AWHBBCarModel *model;
@property(nonatomic,copy)AWHBGMNetworkRequestBlock NetworkRequestBlock;
@property(nonatomic, copy) void (^fullScreenClickBlock)(BOOL isFullScreen);
- (void)refreshInformation;
- (void)noFullScreenContentHeight:(CGFloat)height;
@end

NS_ASSUME_NONNULL_END

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
@property(nonatomic,strong)AWHBBCarModel *model;
@property(nonatomic,copy)AWHBGMNetworkRequestBlock NetworkRequestBlock;
@end

NS_ASSUME_NONNULL_END

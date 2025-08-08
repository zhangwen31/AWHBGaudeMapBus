//
//  AWHBGMRegionalMapViewController.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/26.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMRegionalMapViewController : AWHBBBaseViewController

/** */
@property(nonatomic,strong)NSArray *carListArr;
@property(nonatomic,copy)NSString *tabOpinion;
@property(nonatomic,copy)NSString *titleStr;
@property(nonatomic,copy)NSString *regionId;

@end

NS_ASSUME_NONNULL_END

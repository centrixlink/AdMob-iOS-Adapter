//
//  CentrixlinkAdapter.h
//  CentrixlinkAdapter
//
//  Created by 赵朋 on 2017/8/8.
//  Copyright © 2017年 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface GADMCentrixlinkExtras : NSObject<GADAdNetworkExtras>

@property (nonatomic,copy) NSString *userId;
@property (nonatomic,strong) NSDictionary *options;

@end

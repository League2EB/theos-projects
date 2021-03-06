/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MTRGNavigationHelper, NSString, NSMutableArray, NSDictionary;

@interface MTRGAdData : XXUnknownSuperclass {
	MTRGNavigationHelper* _navigationHelper;
	NSMutableArray* _sections;
	BOOL _isFromCache;
	NSString* _url;
	NSString* _rawData;
	NSString* _htmlWrapper;
	NSDictionary* _jsonDict;
}
@property(readonly, assign, nonatomic) MTRGNavigationHelper* navigationHelper;
@property(assign, nonatomic) BOOL isFromCache;
@property(retain, nonatomic) NSDictionary* jsonDict;
@property(copy, nonatomic) NSString* htmlWrapper;
@property(copy, nonatomic) NSString* rawData;
@property(copy, nonatomic) NSString* url;
+(id)excludedBanners;
+(id)excludedBannersArray;
-(void).cxx_destruct;
-(void)checkExclude;
-(void)handleClickWithBanner:(id)banner appController:(id)controller fullscreenController:(id)controller3 closeOnClick:(BOOL)click;
-(void)handleClickWithBanner:(id)banner appController:(id)controller;
-(id)sectionByType:(id)type;
-(id)sectionByName:(id)name;
-(void)addSection:(id)section;
-(id)init;
@end


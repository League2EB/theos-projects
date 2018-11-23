/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKImage.h"
#import "VKDomain.h"

@class VKAdData, NSMutableDictionary, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface VKFeedAdsItemCard : VKDomain <VKImage> {
	NSString* _card_id;
	NSString* _title;
	NSNumber* _rating;
	NSString* _descr;
	NSString* _followers;
	NSString* _button;
	NSNumber* _ios_app_id;
	NSString* _ios_app_url;
	NSString* _link_url;
	int _link_url_target;
	NSMutableDictionary* _variants;
	float _ratio;
	VKAdData* _adData;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKAdData* adData;
@property(assign, nonatomic) float ratio;
@property(retain, nonatomic) NSMutableDictionary* variants;
@property(assign, nonatomic) int link_url_target;
@property(retain, nonatomic) NSString* link_url;
@property(retain, nonatomic) NSString* ios_app_url;
@property(retain, nonatomic) NSNumber* ios_app_id;
@property(retain, nonatomic) NSString* button;
@property(retain, nonatomic) NSString* followers;
@property(retain, nonatomic) NSString* descr;
@property(retain, nonatomic) NSNumber* rating;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* card_id;
-(void).cxx_destruct;
-(id)messagesPlaceholder;
-(XXStruct_UOIMaD)messagesRenderType;
-(BOOL)forceZoom;
-(id)thumbnailUrl;
-(id)fullVariant;
-(id)messagesVariant;
-(id)thumbnailVariant;
-(int)pickSizeForRatio:(float)ratio width:(float)width height:(float)height;
-(BOOL)process:(id)process context:(id)context;
@end

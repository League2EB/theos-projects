/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ActionOptionsProviderActionBuilder.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ActionOptionsProviderBanSource : ActionOptionsProviderActionBuilder {
	BOOL _fastBan;
	NSNumber* _sourceId;
	NSString* _title;
	NSString* _track_code;
}
@property(retain, nonatomic) NSString* track_code;
@property(readonly, assign, nonatomic) BOOL fastBan;
@property(readonly, copy, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) NSNumber* sourceId;
+(id)sourceId:(id)anId;
+(id)source:(id)source type:(int)type;
+(id)sourceId:(id)anId title:(id)title type:(int)type;
-(void).cxx_destruct;
-(void)fillOptionsForBuilder:(id)builder context:(id)context;
-(id)initWithSourceId:(id)sourceId;
-(id)initWithSource:(id)source type:(int)type;
-(id)initWithSourceId:(id)sourceId title:(id)title type:(int)type;
@end


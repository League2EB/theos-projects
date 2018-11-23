/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface VKNameRequest : VKDomain {
	int _status;
	NSString* _first_name;
	NSString* _last_name;
	NSNumber* _repeat_date;
}
@property(retain, nonatomic) NSNumber* repeat_date;
@property(retain, nonatomic) NSString* last_name;
@property(retain, nonatomic) NSString* first_name;
@property(assign, nonatomic) int status;
-(void).cxx_destruct;
-(BOOL)isEqual:(id)equal;
-(BOOL)canCancel;
-(BOOL)process:(id)process context:(id)context;
@end

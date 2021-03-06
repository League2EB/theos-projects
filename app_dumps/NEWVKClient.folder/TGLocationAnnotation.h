/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"
#import "MKAnnotation.h"

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface TGLocationAnnotation : XXUnknownSuperclass <MKAnnotation> {
	NSString* _title;
	NSString* _subtitle;
	NSDictionary* _userInfo;
	CLLocationCoordinate2D _coordinate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSDictionary* userInfo;
@property(copy, nonatomic) NSString* subtitle;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic) CLLocationCoordinate2D coordinate;
-(void).cxx_destruct;
-(id)initWithCoordinate:(CLLocationCoordinate2D)coordinate;
@end


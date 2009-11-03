/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVRequest.h"


@interface DAVPost : DAVRequest {
}
+(id)postRequestWithURL:(id)url data:(id)data;
+(id)postRequestWithSession:(id)session path:(id)path data:(id)data;
-(id)initPostWithURL:(id)url data:(id)data;
-(id)initPostWithSession:(id)session path:(id)path data:(id)data;
-(id)data;
@end

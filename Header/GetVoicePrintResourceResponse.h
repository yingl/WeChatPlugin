//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, ResourceCtx;

__attribute__((visibility("hidden")))
@interface GetVoicePrintResourceResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasResourceData:1;
    BaseResponse *baseResponse;
    ResourceCtx *resourceData;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetResourceData:) ResourceCtx *resourceData; // @synthesize resourceData;
@property(readonly, nonatomic) BOOL hasResourceData; // @synthesize hasResourceData;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end


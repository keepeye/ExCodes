//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse;

__attribute__((visibility("hidden")))
@interface AddFavItemResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasFavId:1;
    unsigned int hasUpdateSeq:1;
    unsigned int hasUsedSize:1;
    unsigned int favId;
    unsigned int updateSeq;
    BaseResponse *baseResponse;
    unsigned long long usedSize;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetUsedSize:) unsigned long long usedSize; // @synthesize usedSize;
@property(readonly, nonatomic) BOOL hasUsedSize; // @synthesize hasUsedSize;
@property(nonatomic, setter=SetUpdateSeq:) unsigned int updateSeq; // @synthesize updateSeq;
@property(readonly, nonatomic) BOOL hasUpdateSeq; // @synthesize hasUpdateSeq;
@property(nonatomic, setter=SetFavId:) unsigned int favId; // @synthesize favId;
@property(readonly, nonatomic) BOOL hasFavId; // @synthesize hasFavId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

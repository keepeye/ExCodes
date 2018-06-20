//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface GetProductDetailRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasPid:1;
    unsigned int hasVersion:1;
    unsigned int hasScanCode:1;
    unsigned int version;
    BaseRequest *baseRequest;
    NSString *pid;
    NSString *scanCode;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetScanCode:) NSString *scanCode; // @synthesize scanCode;
@property(readonly, nonatomic) BOOL hasScanCode; // @synthesize hasScanCode;
@property(nonatomic, setter=SetVersion:) unsigned int version; // @synthesize version;
@property(readonly, nonatomic) BOOL hasVersion; // @synthesize hasVersion;
@property(retain, nonatomic, setter=SetPid:) NSString *pid; // @synthesize pid;
@property(readonly, nonatomic) BOOL hasPid; // @synthesize hasPid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

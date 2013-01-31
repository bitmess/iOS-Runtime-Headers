/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSString, NSArray;

@interface MCProfileServiceProfile : MCProfile  {
    NSString *_URLString;
    NSArray *_deviceAttributes;
    id _challenge;
    NSData *_enrollmentIdentityPersistentID;
    BOOL _confirmInstallation;
    NSArray *_bogusPayloads;
}

@property(retain) NSString * URLString;
@property(retain) NSData * enrollmentIdentityPersistentID;
@property(readonly) NSArray * deviceAttributes;
@property(readonly) id challenge;
@property(readonly) BOOL confirmInstallation;


- (id)challenge;
- (id)description;
- (void).cxx_destruct;
- (BOOL)confirmInstallation;
- (void)setEnrollmentIdentityPersistentID:(id)arg1;
- (id)enrollmentIdentityPersistentID;
- (id)deviceAttributes;
- (id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2;
- (id)_badDataTypeErrorWithFieldName:(id)arg1;
- (id)payloads;
- (id)localizedPayloadSummaryByType;
- (id)initWithDictionary:(id)arg1 originalData:(id)arg2 wasEncrypted:(BOOL)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id*)arg5;
- (id)stubDictionary;
- (void)setURLString:(id)arg1;
- (id)URLString;

@end
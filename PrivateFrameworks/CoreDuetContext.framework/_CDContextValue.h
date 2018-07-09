/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _metadata;
}

@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) NSMutableDictionary *metadata;
@property (nonatomic, retain) NSObject<NSCopying><NSSecureCoding> *value;

// Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext

+ (id)supportedContextValueClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastModifiedDate;
- (id)metadata;
- (void)setLastModifiedDate:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

+ (id)contextMetadataWithInteraction:(id)arg1 bundleIdentifier:(id)arg2 eventUUID:(id)arg3;

@end
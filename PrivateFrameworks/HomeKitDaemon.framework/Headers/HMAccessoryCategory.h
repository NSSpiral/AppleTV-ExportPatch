/* Runtime dump - HMAccessoryCategory
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMAccessoryCategory : NSObject <NSSecureCoding, HMObjectMerge>
{
    NSString * _categoryType;
    NSString * _name;
}

@property (copy, nonatomic) NSString * categoryType;
@property (readonly, copy, nonatomic) NSString * localizedDescription;
@property (copy, nonatomic) NSString * name;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * uniqueIdentifier;

+ (char)supportsSecureCoding;

- (HMAccessoryCategory *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMAccessoryCategory *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)localizedDescription;
- (NSUUID *)uniqueIdentifier;
- (void)setCategoryType:(NSString *)arg0;
- (NSString *)categoryType;
- (void).cxx_destruct;
- (HMAccessoryCategory *)initWithType:(NSString *)arg0 name:(NSString *)arg1;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end

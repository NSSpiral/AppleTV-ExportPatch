/* Runtime dump - SSPreorder
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPreorder : NSObject <SSXPCCoding>
{
    NSNumber * _accountID;
    NSString * _artistName;
    SSItemImageCollection * _imageCollection;
    unsigned long long _itemID;
    NSString * _itemKind;
    double _releaseDate;
    NSString * _releaseDateString;
    long long _pid;
    unsigned long long _preorderID;
    NSString * _title;
}

@property (readonly, nonatomic) NSString * artistName;
@property (readonly, nonatomic) SSItemImageCollection * imageCollection;
@property (readonly, nonatomic) NSString * itemKind;
@property (readonly, nonatomic) long long persistentIdentifier;
@property (readonly, nonatomic) NSDate * releaseDate;
@property (readonly, nonatomic) NSString * releaseDateString;
@property (readonly, nonatomic) NSNumber * storeAccountIdentifier;
@property (readonly, nonatomic) unsigned long long storeItemIdentifier;
@property (readonly, nonatomic) unsigned long long storePreorderIdentifier;
@property (readonly, nonatomic) NSString * title;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSNumber *)storeAccountIdentifier;
- (NSDictionary *)copyXPCEncoding;
- (SSPreorder *)initWithXPCEncoding:(NSString *)arg0;
- (unsigned long long)storeItemIdentifier;
- (long long)persistentIdentifier;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)title;
- (void)_setTitle:(NSString *)arg0;
- (NSString *)artistName;
- (NSString *)itemKind;
- (NSDate *)releaseDate;
- (NSString *)_initWithPersistentIdentifier:(long long)arg0;
- (SSItemImageCollection *)imageCollection;
- (NSString *)releaseDateString;
- (NSObject *)copyReleaseDateStringWithStyle:(long)arg0;
- (void)_setArtistName:(NSString *)arg0;
- (void)_setImageCollection:(SSItemImageCollection *)arg0;
- (void)_setItemKind:(id)arg0;
- (void)_setReleaseDate:(NSDate *)arg0;
- (void)_setReleaseDateString:(NSString *)arg0;
- (void)_setStoreAccountIdentifier:(NSString *)arg0;
- (void)_setStoreItemIdentifier:(long long)arg0;
- (void)_setStorePreorderIdentifier:(long long)arg0;
- (unsigned long long)storePreorderIdentifier;

@end

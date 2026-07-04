/* Runtime dump - GSAddition
 * Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSAddition : NSObject
{
    NSObject<GSAdditionStoring><GSAdditionStoringPrivate> * _storage;
    unsigned long long _options;
    NSNumber * _size;
    NSString * _namespace;
    NSURL * _url;
    NSString * _originalName;
    NSString * _displayName;
    NSDictionary * _userInfo;
}

@property (readonly, nonatomic) NSString * br_lastEditorDeviceName;
@property (readonly, nonatomic) NSString * br_lastEditorName;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSObject<GSAdditionStoring> * storage;
@property (readonly, nonatomic) NSString * nameSpace;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSNumber * size;
@property (readonly, nonatomic) NSString * originalPOSIXName;
@property (readonly, nonatomic) NSString * displayName;
@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) NSDictionary * userInfo;
@property (readonly, nonatomic) <NSCopying><NSSecureCoding> * persistentIdentifier;
@property (readonly, nonatomic) char isSavedConflict;
@property (readonly, nonatomic) NSData * sandboxExtension;

+ (char)brc_parseAdditionFilename:(NSString *)arg0 mangledContainerID:(id *)arg1 itemID:(id *)arg2 etag:(id *)arg3;
+ (NSString *)additionURLForName:(NSString *)arg0 storagePrefix:(NSString *)arg1 inConflictNamespace:(char)arg2;
+ (GSAddition *)makeNameForUser:(unsigned int)arg0 name:(NSString *)arg1;

- (char)brc_parseMangledContainerID:(id *)arg0 itemID:(id *)arg1 etag:(id *)arg2;
- (NSString *)br_lastEditorDeviceName;
- (char)br_markResolvedWithError:(id *)arg0;
- (NSString *)br_lastEditorName;
- (char)_br_markResolvedWithError:(id *)arg0;
- (char)isSavedConflict;
- (NSURL *)replaceItemAtURL:(NSURL *)arg0 error:(id *)arg1;
- (char)mergeUserInfo:(NSDictionary *)arg0 error:(id *)arg1;
- (char)setNameSpace:(NSString *)arg0 error:(id *)arg1;
- (<NSCopying><NSSecureCoding> *)persistentIdentifier;
- (void)dealloc;
- (NSNumber *)size;
- (GSAddition *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (NSURL *)url;
- (NSDictionary *)userInfo;
- (unsigned long long)options;
- (NSString *)displayName;
- (NSString *)originalPOSIXName;
- (NSString *)nameSpace;
- (struct NSObject *)storage;
- (NSError *)displayNameWithError:(id *)arg0;
- (NSError *)originalPOSIXNameWithError:(id *)arg0;
- (NSError *)userInfoWithError:(id *)arg0;
- (void)_refreshWithDictionary:(NSDictionary *)arg0;
- (NSData *)sandboxExtension;
- (char)refreshWithError:(id *)arg0;
- (GSAddition *)_initWithStorage:(NSObject<GSAdditionStoring> *)arg0 andDictionary:(NSDictionary *)arg1;
- (char)setOptions:(unsigned long long)arg0 error:(id *)arg1;
- (char)setDisplayName:(NSString *)arg0 error:(id *)arg1;
- (char)internalStat:(struct stat *)arg0;
- (char)copyAdditionContentToURL:(NSURL *)arg0 error:(id *)arg1;

@end

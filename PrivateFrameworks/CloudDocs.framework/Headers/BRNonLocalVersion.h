/* Runtime dump - BRNonLocalVersion
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRNonLocalVersion : NSObject
{
    NSURL * _url;
    NSString * _displayName;
    NSString * _etag;
    unsigned long long _size;
    NSDate * _modificationDate;
    NSString * _lastEditorDeviceName;
    NSString * _lastEditorFormattedName;
    char _hasThumbnail;
    GSPermanentStorage * _versionsStore;
    long long _sandboxHandle;
    NSURL * _physicalURL;
}

@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) NSString * etag;
@property (readonly, nonatomic) <NSCopying><NSSecureCoding> * persistentIdentifier;
@property (readonly, nonatomic) NSString * displayName;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSDate * modificationDate;
@property (readonly, nonatomic) NSString * lastEditorDeviceName;
@property (readonly, nonatomic) NSString * lastEditorFormattedName;
@property (nonatomic) char hasThumbnail;
@property (readonly, nonatomic) char isLatestVersion;

+ (NSURL *)listVersionsOfDocumentAtURL:(NSURL *)arg0;

- (NSString *)lastEditorFormattedName;
- (<NSCopying><NSSecureCoding> *)persistentIdentifier;
- (void)dealloc;
- (unsigned long long)size;
- (NSString *)description;
- (NSURL *)url;
- (NSDate *)modificationDate;
- (NSString *)displayName;
- (char)isLatestVersion;
- (BRNonLocalVersion *)initWithURL:(NSString *)arg0 physicalURL:(NSURL *)arg1 size:(unsigned long long)arg2 extension:(id *)arg3 etag:(NSString *)arg4 hasThumbnail:(char)arg5 displayName:(NSString *)arg6 lastEditorDeviceName:(NSString *)arg7 lastEditorFormattedName:(NSString *)arg8 modificationDate:(NSDate *)arg9 versionsStore:(GSPermanentStorage *)arg10;
- (void)setHasThumbnail:(char)arg0;
- (NSString *)etag;
- (char)hasThumbnail;
- (NSString *)lastEditorDeviceName;

@end

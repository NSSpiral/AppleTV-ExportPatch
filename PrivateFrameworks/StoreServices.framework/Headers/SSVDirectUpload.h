/* Runtime dump - SSVDirectUpload
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVDirectUpload : NSObject <SSXPCCoding>
{
    NSString * _categoryName;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesSent;
    NSError * _error;
    char _explicitContent;
    long long _persistentIdentifier;
    int _state;
    NSString * _subtitle;
    NSURL * _thumbnailImageURL;
    NSString * _title;
    NSString * _uploadKind;
    NSString * _uti;
}

@property (nonatomic) long long persistentIdentifier;
@property (nonatomic) char explicitContent;
@property (copy, nonatomic) NSString * categoryName;
@property (copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSURL * thumbnailImageURL;
@property (copy, nonatomic) NSString * UTI;
@property (nonatomic) long long countOfBytesExpectedToSend;
@property (nonatomic) long long countOfBytesSent;
@property (copy, nonatomic) NSError * error;
@property (nonatomic) int state;
@property (copy, nonatomic) NSString * _uploadKind;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setCountOfBytesSent:(long long)arg0;
- (void)setCountOfBytesExpectedToSend:(long long)arg0;
- (long long)countOfBytesSent;
- (long long)countOfBytesExpectedToSend;
- (NSDictionary *)copyXPCEncoding;
- (SSVDirectUpload *)initWithXPCEncoding:(NSString *)arg0;
- (long long)persistentIdentifier;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (NSString *)title;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)UTI;
- (void)setUTI:(NSSet *)arg0;
- (NSError *)error;
- (void)setError:(NSError *)arg0;
- (char)isExplicitContent;
- (void)setExplicitContent:(char)arg0;
- (NSString *)categoryName;
- (void)setCategoryName:(NSString *)arg0;
- (void)setThumbnailImageURL:(NSURL *)arg0;
- (NSURL *)thumbnailImageURL;
- (void)_adoptStatusFromUpload:(id)arg0;
- (void)setPersistentIdentifier:(long long)arg0;
- (NSString *)_uploadKind;
- (void)_setUploadKind:(id)arg0;

@end

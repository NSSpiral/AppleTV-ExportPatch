/* Runtime dump - CKDRequestHeader
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRequestHeader : NSObject <NSSecureCoding>
{
    NSDictionary * _headerDict;
    NSString * _method;
    NSURL * _url;
    NSString * _sessionConfigurationIdentifier;
    unsigned int _urlSessionTaskIdentifier;
}

@property (retain, nonatomic) NSDictionary * headerDict;
@property (retain, nonatomic) NSString * method;
@property (retain, nonatomic) NSURL * url;
@property (retain, nonatomic) NSString * sessionConfigurationIdentifier;
@property (nonatomic) unsigned int urlSessionTaskIdentifier;

+ (char)supportsSecureCoding;

- (CKDRequestHeader *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (NSString *)method;
- (void).cxx_destruct;
- (void)setHeaderDict:(NSDictionary *)arg0;
- (void)setSessionConfigurationIdentifier:(NSString *)arg0;
- (void)setUrlSessionTaskIdentifier:(unsigned int)arg0;
- (NSDictionary *)headerDict;
- (NSString *)sessionConfigurationIdentifier;
- (unsigned int)urlSessionTaskIdentifier;
- (void)setMethod:(NSString *)arg0;

@end

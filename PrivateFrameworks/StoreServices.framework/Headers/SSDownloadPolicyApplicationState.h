/* Runtime dump - SSDownloadPolicyApplicationState
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadPolicyApplicationState : NSObject <NSCoding, SSXPCCoding, NSCopying>
{
    NSString * _applicationIdentifier;
    NSSet * _applicationStates;
}

@property (copy, nonatomic) NSString * applicationIdentifier;
@property (copy, nonatomic) NSSet * applicationStates;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSDownloadPolicyApplicationState *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSDownloadPolicyApplicationState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)applicationIdentifier;
- (SSDownloadPolicyApplicationState *)copyWithZone:(struct _NSZone *)arg0;
- (void)setApplicationIdentifier:(NSString *)arg0;
- (NSSet *)applicationStates;
- (SSDownloadPolicyApplicationState *)initWithApplicationIdentifier:(NSString *)arg0;
- (void)addApplicationState:(int)arg0;
- (void)setNotRunningApplicationStates;
- (void)setApplicationStates:(NSSet *)arg0;

@end

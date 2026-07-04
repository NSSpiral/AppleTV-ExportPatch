/* Runtime dump - CPLProxyPushSession
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxyPushSession : CPLProxySession <CPLPushChangeSessionImplementation>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)beginSessionForProxy:(NSObject *)arg0 knownVersion:(NSString *)arg1 completionHandler:(id /* block */)arg2;

- (void)commitChangeBatch:(id)arg0 withCompletionHandler:(id /* block */)arg1;

@end

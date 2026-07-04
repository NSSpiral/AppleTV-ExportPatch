/* Runtime dump - IKAppMediaItemBridge
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppMediaItemBridge : NSObject
{
    <IKAppMediaItem> * _appMediaItem;
    IKJSMediaItem * _jsMediaItem;
}

@property (readonly, nonatomic) <IKAppMediaItem> * appMediaItem;
@property (readonly, weak, nonatomic) IKJSMediaItem * jsMediaItem;
@property (retain, nonatomic) NSString * url;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * subtitle;
@property (retain, nonatomic) NSString * description;

- (void)setDescription:(NSString *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)url;
- (NSString *)title;
- (void)setUrl:(NSString *)arg0;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (void).cxx_destruct;
- (<IKAppMediaItem> *)appMediaItem;
- (IKJSMediaItem *)jsMediaItem;
- (IKAppMediaItemBridge *)initWithJSMediaItem:(NSObject *)arg0;
- (void)certificateComplete:(id)arg0 error:(NSError *)arg1 callback:(id /* block */)arg2;
- (void)contentIdentifierComplete:(id)arg0 error:(NSError *)arg1 callback:(id /* block */)arg2;
- (void)keyComplete:(id)arg0 error:(NSError *)arg1 callback:(id /* block */)arg2;
- (void)startLoadingCertificateDataForURL:(NSURL *)arg0 withCallback:(id /* block */)arg1;
- (void)startLoadingContentIdentifierDataForURL:(NSURL *)arg0 withCallback:(id /* block */)arg1;
- (void)startLoadingKeyDataForURL:(NSURL *)arg0 keyRequestData:(NSData *)arg1 withCallback:(id /* block */)arg2;

@end

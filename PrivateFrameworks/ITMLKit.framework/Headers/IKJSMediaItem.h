/* Runtime dump - IKJSMediaItem
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSMediaItem : IKJSObject <IKJSMediaItem>
{
    IKAppMediaItemBridge * _bridge;
}

@property (readonly, nonatomic) IKAppMediaItemBridge * bridge;
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
- (IKAppMediaItemBridge *)bridge;
- (IKJSMediaItem *)initWithArgument:(void *)arg0;
- (void)startLoadingCertificateDataForURI:(NSString *)arg0 withCallback:(id /* block */)arg1;
- (void)startLoadingContentIdentifierDataForURI:(NSString *)arg0 withCallback:(id /* block */)arg1;
- (void)startLoadingKeyDataForURI:(NSString *)arg0 requestData:(NSData *)arg1 withCallback:(id /* block */)arg2;

@end

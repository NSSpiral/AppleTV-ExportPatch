/* Runtime dump - IKAppDOMPlayer
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppDOMPlayer : NSObject <IKJSPlayerAppBridge, IKDOMFeature>
{
    NSString * _featureName;
    IKAppContext * _appContext;
    <IKAppPlayerDelegate> * _delegate;
}

@property (weak, nonatomic) <IKAppPlayerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy, nonatomic) NSString * featureName;
@property (readonly, weak, nonatomic) IKAppContext * appContext;

+ (NSObject *)makeFeatureJSObjectForFeature:(NSObject *)arg0;

- (void)setDelegate:(<IKAppPlayerDelegate> *)arg0;
- (<IKAppPlayerDelegate> *)delegate;
- (void).cxx_destruct;
- (IKAppContext *)appContext;
- (IKAppDOMPlayer *)initWithDOMNode:(NSObject *)arg0 featureName:(NSString *)arg1;
- (CALayer *)currentAVMediaElementForPlayer:(id)arg0;
- (NSString *)featureName;

@end

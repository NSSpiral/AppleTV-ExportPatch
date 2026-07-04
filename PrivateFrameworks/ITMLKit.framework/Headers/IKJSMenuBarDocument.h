/* Runtime dump - IKJSMenuBarDocument
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSMenuBarDocument : IKJSObject <IKJSMenuBarDocument>
{
    <IKJSMenuBarDocumentAppBridge> * _appBridge;
}

@property (weak, nonatomic) <IKJSMenuBarDocumentAppBridge> * appBridge;

- (void).cxx_destruct;
- (void)setAppBridge:(<IKJSMenuBarDocumentAppBridge> *)arg0;
- (<IKJSMenuBarDocumentAppBridge> *)appBridge;
- (NSObject *)_entityUniqueIdentifierForObject:(NSObject *)arg0;
- (NSObject *)getDocument:(NSObject *)arg0;
- (void)setDocument:(NSObject *)arg0 :(id)arg1 :(id)arg2;
- (void)setSelectedItem:(BRControl *)arg0 :(id)arg1;

@end

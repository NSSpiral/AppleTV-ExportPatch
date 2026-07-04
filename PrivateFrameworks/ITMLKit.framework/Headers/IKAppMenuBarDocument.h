/* Runtime dump - IKAppMenuBarDocument
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppMenuBarDocument : NSObject <IKJSMenuBarDocumentAppBridge, IKDOMFeature>
{
    IKDOMNode * _parentDOMNode;
    NSMutableDictionary * _jsDocumentsByEntityUniqueIdentifier;
    NSMutableDictionary * _documentsByEntityUniqueIdentifier;
    NSMutableDictionary * _documentOptionsByEntityUniqueIdentifier;
    <NSCopying> * _selectedEntityUniqueIdentifier;
    IKAppContext * _appContext;
    NSString * _featureName;
    <IKAppMenuBarDocumentDelegate> * _delegate;
    IKViewElement * _menuBarElement;
}

@property (weak, nonatomic) <IKAppMenuBarDocumentDelegate> * delegate;
@property (readonly, nonatomic) IKViewElement * selectedMenuItem;
@property (weak, nonatomic) IKViewElement * menuBarElement;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy, nonatomic) NSString * featureName;
@property (readonly, weak, nonatomic) IKAppContext * appContext;

+ (NSObject *)makeFeatureJSObjectForFeature:(NSObject *)arg0;

- (void)setDelegate:(<IKAppMenuBarDocumentDelegate> *)arg0;
- (<IKAppMenuBarDocumentDelegate> *)delegate;
- (void).cxx_destruct;
- (IKAppContext *)appContext;
- (IKAppMenuBarDocument *)initWithDOMNode:(NSObject *)arg0 featureName:(NSString *)arg1;
- (void)migrateToViewElement:(NSObject *)arg0;
- (NSObject *)jsMenuBarDocument:(NSObject *)arg0 documentForEntityUniqueIdentifier:(NSString *)arg1;
- (void)jsMenuBarDocument:(NSObject *)arg0 setDocument:(NSObject *)arg1 forEntityUniqueIdentifier:(NSString *)arg2 withOptions:(NSDictionary *)arg3;
- (void)jsMenuBarDocument:(NSObject *)arg0 setSelectedEntityUniqueIdentifier:(<NSCopying> *)arg1 withOptions:(NSDictionary *)arg2;
- (NSString *)_menuItemElementForEntityUniqueIdentifier:(NSString *)arg0;
- (NSObject *)documentForMenuItem:(NSObject *)arg0;
- (NSObject *)documentOptionsForMenuItem:(NSObject *)arg0;
- (NSString *)documentForEntityUniqueIdentifier:(NSString *)arg0;
- (NSString *)documentOptionsForEntityUniqueIdentifier:(NSString *)arg0;
- (IKViewElement *)selectedMenuItem;
- (IKViewElement *)menuBarElement;
- (void)setMenuBarElement:(IKViewElement *)arg0;
- (NSString *)featureName;

@end

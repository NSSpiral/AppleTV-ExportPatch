/* Runtime dump - IKAppDocument
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppDocument : NSObject <IKJSDOMDocumentAppBridge, IKStyleMediaQueryEvaluator>
{
    char _updated;
    char _subtreeUpdated;
    IKAppContext * _appContext;
    IKDOMDocument * _jsDocument;
    NSString * _identifier;
    IKHeadElement * _headElement;
    IKViewElement * _navigationBarElement;
    IKViewElement * _toolbarElement;
    IKViewElement * _templateElement;
    NSError * _error;
    <IKAppDocumentDelegate> * _delegate;
    IKJSObject * _owner;
    NSMutableSet * _impressions;
    NSMutableDictionary * _impressionsDict;
    IKViewElementStyleFactory * _styleFactory;
    JSManagedValue * _jsManagedDocument;
    double _impressionThreshold;
}

@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) IKHeadElement * headElement;
@property (retain, nonatomic) IKViewElement * navigationBarElement;
@property (retain, nonatomic) IKViewElement * toolbarElement;
@property (retain, nonatomic) IKViewElement * templateElement;
@property (retain, nonatomic) NSError * error;
@property (weak, nonatomic) <IKAppDocumentDelegate> * delegate;
@property (nonatomic) char updated;
@property char subtreeUpdated;
@property (nonatomic) double impressionThreshold;
@property (readonly, weak) IKAppContext * appContext;
@property (readonly, weak, nonatomic) IKDOMDocument * jsDocument;
@property (readonly, weak, nonatomic) IKJSObject * owner;
@property (readonly, weak, nonatomic) IKJSNavigationDocument * navigationDocument;
@property (retain, nonatomic) NSMutableSet * impressions;
@property (retain, nonatomic) NSMutableDictionary * impressionsDict;
@property (retain, nonatomic) IKViewElementStyleFactory * styleFactory;
@property (retain, nonatomic) JSManagedValue * jsManagedDocument;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<IKAppDocumentDelegate> *)arg0;
- (<IKAppDocumentDelegate> *)delegate;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (NSError *)error;
- (IKJSObject *)owner;
- (IKAppContext *)appContext;
- (IKDOMDocument *)jsDocument;
- (void)_updateWithXML:(id)arg0;
- (JSManagedValue *)jsManagedDocument;
- (IKJSNavigationDocument *)navigationDocument;
- (IKViewElement *)templateElement;
- (void)setImpressionsDict:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)impressionsDict;
- (void)_impressionDataFromViewElements:(id)arg0 timestamp:(long long)arg1 impressions:(NSMutableSet *)arg2 impressionsDict:(NSMutableDictionary *)arg3;
- (IKViewElementStyleFactory *)styleFactory;
- (void)setStyleFactory:(IKViewElementStyleFactory *)arg0;
- (IKHeadElement *)headElement;
- (void)setHeadElement:(IKHeadElement *)arg0;
- (void)setTemplateElement:(IKViewElement *)arg0;
- (IKViewElement *)navigationBarElement;
- (void)setNavigationBarElement:(IKViewElement *)arg0;
- (IKViewElement *)toolbarElement;
- (void)setToolbarElement:(IKViewElement *)arg0;
- (void)setUpdated:(char)arg0;
- (void)setSubtreeUpdated:(char)arg0;
- (void)setViewElementStylesDirty;
- (char)_clearUpdatesForElement:(NSObject *)arg0;
- (char)isSubtreeUpdated;
- (void)updateForDocument:(NSObject *)arg0;
- (void)setNeedsUpdateForDocument:(NSObject *)arg0;
- (id)snapshotImpressions;
- (id)recordedImpressions;
- (void)runTestWithName:(NSString *)arg0 options:(NSDictionary *)arg1;
- (char)evaluateStyleMediaQueryList:(NSArray *)arg0;
- (IKAppDocument *)initWithAppContext:(IKAppContext *)arg0 document:(NSObject *)arg1 owner:(IKJSObject *)arg2;
- (void)onLoad;
- (void)onUnload;
- (void)onAppear;
- (void)onDisappear;
- (void)onNeedsUpdateWithCompletion:(id /* block */)arg0;
- (void)onUpdate;
- (void)onViewAttributesChangeWithArguments:(NSDictionary *)arg0 completion:(id /* block */)arg1;
- (void)recordImpressionsForViewElements:(id)arg0;
- (NSObject *)retrieveJSElementForViewElement:(NSObject *)arg0 jsContext:(JSContext *)arg1;
- (void)setJsManagedDocument:(JSManagedValue *)arg0;
- (void)setError:(NSError *)arg0;
- (char)isUpdated;
- (double)impressionThreshold;
- (void)setImpressionThreshold:(double)arg0;
- (void)scrollToTop;
- (NSMutableSet *)impressions;
- (void)setImpressions:(NSMutableSet *)arg0;

@end

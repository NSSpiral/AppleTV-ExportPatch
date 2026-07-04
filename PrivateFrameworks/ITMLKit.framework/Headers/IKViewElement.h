/* Runtime dump - IKViewElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElement : NSObject
{
    char _disabled;
    char _impressionable;
    IKAppDocument * _appDocument;
    NSString * _elementID;
    unsigned int _elementType;
    NSString * _elementName;
    IKViewElement * _parent;
    NSArray * _children;
    NSDictionary * _attributes;
    NSString * _accessibilityText;
    NSString * _autoHighlightIdentifier;
    unsigned int _updateType;
    NSArray * _features;
    NSString * _itmlID;
    IKViewElementStyleComposer * _styleComposer;
    NSMutableDictionary * _metadataDict;
    NSMutableSet * _activeSingularEvents;
}

@property (readonly, copy, nonatomic) NSString * elementID;
@property (readonly, nonatomic) unsigned int elementType;
@property (readonly, copy, nonatomic) NSString * elementName;
@property (weak, nonatomic) IKViewElement * parent;
@property (retain, nonatomic) NSArray * children;
@property (readonly, retain, nonatomic) NSDictionary * attributes;
@property (readonly, retain, nonatomic) IKViewElementStyle * style;
@property (readonly, copy, nonatomic) NSString * accessibilityText;
@property (readonly, copy, nonatomic) NSString * autoHighlightIdentifier;
@property (nonatomic) char disabled;
@property (nonatomic) char impressionable;
@property (nonatomic) unsigned int updateType;
@property (readonly, copy, nonatomic) NSArray * features;
@property (weak, nonatomic) IKAppDocument * appDocument;
@property (readonly, retain, nonatomic) NSString * itmlID;
@property (readonly, retain, nonatomic) IKViewElementStyleComposer * styleComposer;
@property (retain, nonatomic) NSMutableDictionary * metadataDict;
@property (retain, nonatomic) NSMutableSet * activeSingularEvents;

+ (char)shouldParseChildDOMElements;
+ (unsigned int)evaluateElementUpdateTypeAndReset:(NSSet *)arg0;
+ (NSMutableDictionary *)supportedFeatures;
+ (char)shouldParseChildDOMElement:(NSObject *)arg0;

- (NSString *)elementID;
- (unsigned int)elementType;
- (void)dealloc;
- (IKViewElement *)init;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (IKViewElementStyle *)style;
- (void)setDisabled:(char)arg0;
- (NSDictionary *)attributes;
- (void).cxx_destruct;
- (NSMutableDictionary *)metadataDict;
- (void)setMetadataDict:(NSMutableDictionary *)arg0;
- (unsigned int)updateType;
- (NSString *)elementName;
- (NSObject *)childElementsWithType:(unsigned int)arg0;
- (NSObject *)childElementWithType:(unsigned int)arg0;
- (NSObject *)childTextElementWithStyle:(unsigned int)arg0;
- (void)dispatchEventOfType:(unsigned int)arg0 canBubble:(char)arg1 isCancelable:(char)arg2 extraInfo:(NSDictionary *)arg3 completionBlock:(id /* block */)arg4;
- (NSString *)itmlID;
- (void)setAppDocument:(IKAppDocument *)arg0;
- (NSObject *)applyUpdatesWithElement:(NSObject *)arg0;
- (char)isImpressionable;
- (IKViewElement *)initWithDOMElement:(NSObject *)arg0 parent:(IKViewElement *)arg1 elementFactory:(IKViewElementFactory *)arg2;
- (NSArray *)features;
- (NSObject *)childImageElementWithType:(unsigned int)arg0;
- (NSString *)accessibilityText;
- (IKViewElementStyleComposer *)styleComposer;
- (IKAppDocument *)appDocument;
- (void)_reorderAndUpdateChildrenWithElements:(id)arg0;
- (void)_applyUpdatesToChildrenWithElements:(id)arg0;
- (void)setUpdateType:(unsigned int)arg0;
- (void)_setAppDocument:(NSObject *)arg0;
- (NSMutableSet *)activeSingularEvents;
- (void)setActiveSingularEvents:(NSMutableSet *)arg0;
- (void)_appDocumentDidMarkStylesDirty:(id)arg0;
- (NSString *)autoHighlightIdentifier;
- (void)setImpressionable:(char)arg0;
- (void)setChildren:(NSArray *)arg0;
- (IKViewElement *)parent;
- (void)setParent:(IKViewElement *)arg0;
- (char)isDisabled;
- (NSArray *)children;

@end

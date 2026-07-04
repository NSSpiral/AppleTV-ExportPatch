/* Runtime dump - IKDOMNode
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMNode : IKJSObject <IKJSDOMNode, IKJSDOMEventTarget>
{
    struct _xmlNode * _nodePtr;
    int _ITMLID;
    JSManagedValue * _managedSelf;
    JSManagedValue * _managedOwnerDocument;
    JSManagedValue * _managedParent;
    JSManagedValue * _managedChildNodeList;
    NSMutableDictionary * _eventListenersMap;
    NSHashTable * _domObservers;
}

@property (nonatomic) int ITMLID;
@property (readonly, retain, nonatomic) IKDOMNodeData * jsNodeData;
@property (readonly, retain, nonatomic) JSManagedValue * managedSelf;
@property (retain, nonatomic) JSManagedValue * managedOwnerDocument;
@property (retain, nonatomic) JSManagedValue * managedParent;
@property (retain, nonatomic) JSManagedValue * managedChildNodeList;
@property (retain, nonatomic) NSMutableDictionary * eventListenersMap;
@property (retain, nonatomic) NSHashTable * domObservers;
@property (readonly, retain, nonatomic) NSString * nodeName;
@property (retain, nonatomic) NSString * nodeValue;
@property (readonly, nonatomic) int nodeType;
@property (readonly, weak, nonatomic) IKDOMNode * parentNode;
@property (readonly, retain, nonatomic) IKDOMNodeList * childNodes;
@property (readonly, retain, nonatomic) IKDOMNode * firstChild;
@property (readonly, retain, nonatomic) IKDOMNode * lastChild;
@property (readonly, weak, nonatomic) IKDOMNode * previousSibling;
@property (readonly, weak, nonatomic) IKDOMNode * nextSibling;
@property (readonly, weak, nonatomic) IKDOMDocument * ownerDocument;
@property (retain, nonatomic) NSString * textContent;

+ (void)handleNodeWillRelease:(struct _xmlNode *)arg0;
+ (void)handleNodeParentDidChange:(struct _xmlNode *)arg0;
+ (NSString *)nodeWithAppContext:(<IKApplication> *)arg0 nodePtr:(struct _xmlNode *)arg1;
+ (NSObject *)_eventListenerMapKeyForType:(NSObject *)arg0 useCapture:(char)arg1;

- (void)dealloc;
- (NSString *)description;
- (IKDOMDocument *)ownerDocument;
- (IKDOMNodeList *)childNodes;
- (IKDOMNode *)lastChild;
- (IKDOMNode *)firstChild;
- (IKDOMNode *)parentNode;
- (IKDOMNode *)previousSibling;
- (NSObject *)removeChild:(NSObject *)arg0;
- (char)isSameNode:(NSObject *)arg0;
- (IKDOMElement *)firstElementChild;
- (int)nodeType;
- (IKDOMNode *)nextSibling;
- (void).cxx_destruct;
- (NSString *)nodesForXPath:(NSString *)arg0 error:(id *)arg1;
- (void)enumerateEventListernersForType:(NSObject *)arg0 xmlAttribute:(NSString *)arg1 phase:(int)arg2 usingBlock:(id /* block */)arg3;
- (struct _xmlNode *)nodePtr;
- (IKDOMNode *)initWithAppContext:(<IKApplication> *)arg0 xmlNode:(struct _xmlNode *)arg1;
- (IKDOMNodeData *)jsNodeData;
- (void)notifyChildrenUpdatedWithUpdatedChildNodes:(id)arg0;
- (void)setITMLID:(int)arg0;
- (void)notifyUpdated;
- (NSArray *)childNodesAsArray;
- (NSObject *)performDOMOperation:(unsigned int)arg0 newNode:(NSObject *)arg1 refNode:(NSObject *)arg2;
- (JSManagedValue *)managedSelf;
- (NSError *)writeToStringWithError:(id *)arg0;
- (void)addDOMObserver:(NSObject *)arg0;
- (char)_searchEventListener:(id)arg0 key:(NSString *)arg1 destroy:(char)arg2;
- (NSMutableDictionary *)eventListenersMap;
- (void)setEventListenersMap:(NSMutableDictionary *)arg0;
- (void)_linkManagedObjects;
- (JSManagedValue *)managedParent;
- (JSManagedValue *)managedChildNodeList;
- (void)setManagedChildNodeList:(JSManagedValue *)arg0;
- (char)_validateDOMOperation:(unsigned int)arg0 newNode:(NSObject *)arg1 refNode:(NSObject *)arg2;
- (void)_unlinkManagedObjects;
- (void)_notifyUpdatesToDOMObservers;
- (struct _xmlNode *)_appendNode:(struct _xmlNode *)arg0;
- (struct _xmlNode *)_insertNode:(struct _xmlNode *)arg0 refNode:(struct _xmlNode *)arg1 operation:(struct _xmlDoc *)arg2;
- (NSHashTable *)domObservers;
- (void)setDomObservers:(NSHashTable *)arg0;
- (void)setManagedParent:(JSManagedValue *)arg0;
- (JSManagedValue *)managedOwnerDocument;
- (void)setManagedOwnerDocument:(JSManagedValue *)arg0;
- (NSObject *)getFeature:(NSObject *)arg0 :(id)arg1;
- (void)removeDOMObserver:(NSObject *)arg0;
- (int)ITMLID;
- (NSString *)nodeValue;
- (NSString *)nodeName;
- (IKDOMElement *)lastElementChild;
- (unsigned long)childElementCount;
- (NSArray *)children;
- (char)dispatchEvent:(NSObject *)arg0;
- (void)addEventListener:(NetflixNrdObjectCallback *)arg0 :(id)arg1 :(char)arg2;
- (void)removeEventListener:(NetflixNrdObjectCallback *)arg0 :(id)arg1 :(char)arg2;
- (void)setNodeValue:(NSString *)arg0;
- (NSString *)textContent;
- (void)setTextContent:(NSString *)arg0;
- (id)insertBefore:(id)arg0 :(id)arg1;
- (NSObject *)replaceChild:(NSObject *)arg0 :(id)arg1;
- (NSObject *)appendChild:(NSObject *)arg0;
- (char)hasChildNodes;
- (NSObject *)cloneNode:(char)arg0;
- (char)isEqualNode:(NSObject *)arg0;

@end

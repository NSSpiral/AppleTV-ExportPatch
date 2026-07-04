/* Runtime dump - DOMNodeIterator
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMNodeIterator : DOMObject

@property (readonly) DOMNode * root;
@property (readonly) unsigned int whatToShow;
@property (readonly) <DOMNodeFilter> * filter;
@property (readonly) char expandEntityReferences;
@property (readonly) DOMNode * referenceNode;
@property (readonly) char pointerBeforeReferenceNode;

- (void)dealloc;
- (void)detach;
- (GKListNode *)nextNode;
- (DOMNode *)root;
- (<DOMNodeFilter> *)filter;
- (void)finalize;
- (unsigned int)whatToShow;
- (char)expandEntityReferences;
- (DOMNode *)referenceNode;
- (char)pointerBeforeReferenceNode;
- (NSObject *)previousNode;

@end

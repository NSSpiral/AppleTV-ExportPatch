/* Runtime dump - DOMTreeWalker
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMTreeWalker : DOMObject

@property (readonly) DOMNode * root;
@property (readonly) unsigned int whatToShow;
@property (readonly) <DOMNodeFilter> * filter;
@property (readonly) char expandEntityReferences;
@property (retain) DOMNode * currentNode;

- (void)dealloc;
- (NSObject *)lastChild;
- (NSObject *)firstChild;
- (IKDOMNode *)parentNode;
- (id)previousSibling;
- (id)nextSibling;
- (GKListNode *)nextNode;
- (DOMNode *)root;
- (<DOMNodeFilter> *)filter;
- (void)finalize;
- (unsigned int)whatToShow;
- (char)expandEntityReferences;
- (NSObject *)previousNode;
- (DOMNode *)currentNode;
- (void)setCurrentNode:(DOMNode *)arg0;

@end

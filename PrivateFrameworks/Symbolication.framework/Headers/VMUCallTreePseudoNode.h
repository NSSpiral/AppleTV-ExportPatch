/* Runtime dump - VMUCallTreePseudoNode
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUCallTreePseudoNode : VMUCallTreeNode

- (char)isPseudo;
- (NSObject *)pseudoNodeTopOfStackChild;
- (NSObject *)sortedChildrenWithPseudoNode;
- (NSString *)largestTopOfStackPath;

@end

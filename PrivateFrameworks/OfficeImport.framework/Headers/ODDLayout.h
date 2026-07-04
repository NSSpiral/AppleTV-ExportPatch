/* Runtime dump - ODDLayout
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDLayout : NSObject
{
    ODDLayoutNode * mRootNode;
}

- (SCNNode *)rootNode;
- (void)dealloc;
- (ODDLayout *)init;

@end

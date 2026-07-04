/* Runtime dump - ODDLayoutNode
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDLayoutNode : ODDLayoutObjectList
{
    ODDLayoutVariablePropertySet * mVariableList;
}

- (void)dealloc;
- (NSString *)description;
- (NSArray *)variableList;
- (void)setVariableList:(NSArray *)arg0;

@end

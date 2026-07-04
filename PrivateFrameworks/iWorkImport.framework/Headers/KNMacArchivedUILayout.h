/* Runtime dump - KNMacArchivedUILayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMacArchivedUILayout : TSPObject
{
    KNMacUILayout * mUILayout;
}

@property (readonly, nonatomic) KNMacUILayout * uiLayout;

- (KNMacArchivedUILayout *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (KNMacArchivedUILayout *)initWithUILayout:(NSObject *)arg0 context:(NSObject *)arg1;
- (KNMacUILayout *)uiLayout;
- (void)dealloc;

@end

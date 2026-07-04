/* Runtime dump - ODITitlePoint
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODITitlePoint : ODIHorizonalList3
{
    NSString * mTitlePointPresentationName;
}

- (void)dealloc;
- (ODITitlePoint *)initWithTitlePointPresentationName:(NSString *)arg0 state:(NSObject *)arg1;
- (void)mapRoofStyleFromPoint:(NSObject *)arg0 shape:(NSString *)arg1;
- (void)mapOnePillarStyleFromPoint:(NSObject *)arg0 shape:(NSString *)arg1;
- (void)mapBaseStyleFromPoint:(NSObject *)arg0 shape:(NSString *)arg1;

@end

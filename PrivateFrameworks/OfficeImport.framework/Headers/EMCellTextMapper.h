/* Runtime dump - EMCellTextMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMCellTextMapper : CMMapper
{
    EDString * edString;
    EDStyle * edStyle;
}

- (double)contentWidth;
- (EMCellTextMapper *)initWithEDString:(NSString *)arg0 style:(NSObject *)arg1 parent:(NSObject *)arg2;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1 columnWidth:(double)arg2 height:(double)arg3 spreadLeft:(char)arg4;
- (void)mapVerticalTextAt:(id)arg0 withState:(NSObject *)arg1 width:(double)arg2 height:(double)arg3;
- (void)mapTextRunsAt:(id)arg0;

@end

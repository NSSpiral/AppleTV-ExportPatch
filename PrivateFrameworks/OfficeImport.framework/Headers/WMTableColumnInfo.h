/* Runtime dump - WMTableColumnInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMTableColumnInfo : NSObject
{
    NSMutableArray * mStopArray;
}

- (void)dealloc;
- (unsigned int)count;
- (unsigned int)columnSpan:(float)arg0 at:(unsigned int)arg1;
- (float)stopAt:(unsigned int)arg0;
- (WMTableColumnInfo *)initWithStopArray:(char)arg0;
- (void)mergeStopArray:(NSArray *)arg0;

@end

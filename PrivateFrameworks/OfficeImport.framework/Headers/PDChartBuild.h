/* Runtime dump - PDChartBuild
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDChartBuild : PDBuild
{
    int mChartBuildType;
}

- (char)isEqual:(NSObject *)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (PDChartBuild *)initWithBuildType:(int)arg0;

@end

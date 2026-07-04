/* Runtime dump - ATVMutableChapter
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVMutableChapter : ATVChapter

@property (copy, nonatomic) NSString * localizedName;
@property (copy, nonatomic) NSString * chapterDescription;
@property (retain, nonatomic) ATVTimeRange * timeRange;
@property (retain, nonatomic) ATVDateRange * dateRange;
@property (retain, nonatomic) ATVImageProxy * imageProxy;

@end

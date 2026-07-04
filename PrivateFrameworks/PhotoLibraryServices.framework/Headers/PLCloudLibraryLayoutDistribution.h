/* Runtime dump - PLCloudLibraryLayoutDistribution
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudLibraryLayoutDistribution : NSObject
{
    unsigned short primaryQualityClass;
    unsigned short secondaryQualityClass;
    unsigned long long cutoffPoint;
}

@property (nonatomic) unsigned long long cutoffPoint;
@property (nonatomic) unsigned short primaryQualityClass;
@property (nonatomic) unsigned short secondaryQualityClass;

- (unsigned long long)cutoffPoint;
- (void)setCutoffPoint:(unsigned long long)arg0;
- (unsigned short)primaryQualityClass;
- (void)setPrimaryQualityClass:(unsigned short)arg0;
- (unsigned short)secondaryQualityClass;
- (void)setSecondaryQualityClass:(unsigned short)arg0;

@end

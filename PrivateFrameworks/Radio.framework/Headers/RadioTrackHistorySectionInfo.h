/* Runtime dump - RadioTrackHistorySectionInfo
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrackHistorySectionInfo : NSObject <NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying>
{
    NSString * _indexTitle;
    NSString * _name;
    unsigned int _numberOfObjects;
    NSArray * _objects;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * indexTitle;
@property (readonly, nonatomic) unsigned int numberOfObjects;
@property (readonly, nonatomic) NSArray * objects;

- (NSString *)indexTitle;
- (unsigned int)numberOfObjects;
- (NSArray *)objects;
- (NSString *)name;
- (RadioTrackHistorySectionInfo *)copyWithZone:(struct _NSZone *)arg0;
- (RadioTrackHistorySectionInfo *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

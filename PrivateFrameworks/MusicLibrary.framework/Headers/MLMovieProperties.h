/* Runtime dump - MLMovieProperties
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLMovieProperties : NSObject <NSCopying>
{
    NSMutableDictionary * _dictionary;
}

@property (copy, nonatomic) NSArray * castMembers;
@property (copy, nonatomic) NSString * copyrightWarning;
@property (copy, nonatomic) NSArray * directors;
@property (copy, nonatomic) NSArray * producers;
@property (copy, nonatomic) NSArray * screenwriters;
@property (copy, nonatomic) NSString * studioName;

- (MLMovieProperties *)init;
- (MLMovieProperties *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (MLMovieProperties *)initWithMoviePropertiesDictionary:(NSDictionary *)arg0;
- (NSDictionary *)copyMoviePropertiesDictionary;
- (void)_setValueCopy:(id)arg0 forKey:(NSString *)arg1;
- (void)_setValue:(NSValue *)arg0 forKey:(NSString *)arg1;
- (NSArray *)castMembers;
- (NSString *)copyrightWarning;
- (NSArray *)directors;
- (NSArray *)producers;
- (NSArray *)screenwriters;
- (void)setCastMembers:(NSArray *)arg0;
- (void)setCopyrightWarning:(NSString *)arg0;
- (void)setDirectors:(NSArray *)arg0;
- (void)setProducers:(NSArray *)arg0;
- (void)setScreenwriters:(NSArray *)arg0;
- (void)setStudioName:(NSString *)arg0;
- (NSString *)studioName;

@end

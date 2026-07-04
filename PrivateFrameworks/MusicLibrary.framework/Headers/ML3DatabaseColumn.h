/* Runtime dump - ML3DatabaseColumn
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseColumn : NSObject
{
    NSString * _name;
    unsigned int _datatype;
    unsigned int _columnConstraints;
    id _defaultValue;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) unsigned int datatype;
@property (readonly, nonatomic) unsigned int columnConstraints;
@property (readonly, nonatomic) id defaultValue;

+ (NSString *)columnWithName:(NSString *)arg0 datatype:(unsigned int)arg1 constraints:(unsigned int)arg2 defaultValue:(NSString *)arg3;

- (NSString *)description;
- (NSString *)name;
- (void).cxx_destruct;
- (ML3DatabaseColumn *)initWithName:(NSString *)arg0 datatype:(unsigned int)arg1 constraints:(unsigned int)arg2 defaultValue:(NSString *)arg3;
- (id)_columnDefinitionSQL;
- (unsigned int)datatype;
- (unsigned int)columnConstraints;
- (NSString *)defaultValue;

@end

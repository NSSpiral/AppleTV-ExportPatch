/* Runtime dump - ML3DatabaseNaturalStatement
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseNaturalStatement : NSObject <NSSecureCoding>
{
    NSString * _sql;
    NSMutableArray * _parameters;
}

@property (copy, nonatomic) NSString * sql;
@property (retain, nonatomic) NSMutableArray * parameters;

+ (char)supportsSecureCoding;
+ (ML3DatabaseNaturalStatement *)naturalStatementWithSQL:(id)arg0 parameters:(NSMutableArray *)arg1;

- (ML3DatabaseNaturalStatement *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSString *)sql;
- (void)setParameter:(ICSRoleParameter *)arg0 forPosition:(unsigned int)arg1;
- (NSMutableArray *)parameters;
- (void)setSql:(NSString *)arg0;
- (void)setParameters:(NSMutableArray *)arg0;
- (ML3DatabaseNaturalStatement *)initWithSQL:(id)arg0 parameters:(NSMutableArray *)arg1;

@end

#include <Access/User.h>


namespace DB
{

bool User::equal(const IAccessEntity & other) const
{
    if (!IAccessEntity::equal(other))
        return false;
    const auto & other_user = typeid_cast<const User &>(other);
    return (authentication == other_user.authentication) && (allowed_client_hosts == other_user.allowed_client_hosts)
        && (access == other_user.access) && (access_with_grant_option == other_user.access_with_grant_option)
        && (profile == other_user.profile);
}

}

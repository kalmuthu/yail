#ifndef YAIL_PUBSUB_TRANSPORT_IMPL_SHMEM_H
#define YAIL_PUBSUB_TRANSPORT_IMPL_SHMEM_H

#include <yail/pubsub/transport/detail/shmem_impl.h>

namespace yail {
namespace pubsub {
namespace transport {

template <typename Handler>
inline void shmem::async_send (const yail::buffer &buffer, const Handler &handler)
{
	m_impl->async_send (buffer, handler);
}

template <typename Handler>
inline void shmem::async_receive (yail::buffer &buffer, const Handler &handler)
{
	m_impl->async_receive (buffer, handler);
}

} // namespace transport
} // namespace pubsub
} // namespace yail

#endif // YAIL_PUBSUB_TRANSPORT_IMPL_SHMEM_H
